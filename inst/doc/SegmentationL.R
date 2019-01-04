## ----r1, fig.height = 6, fig.width = 8, fig.align = "center"-------------
library("RcppDynProg")

plot <- requireNamespace("ggplot2", quietly = TRUE)
if(plot) {
  library("ggplot2")
}

set.seed(2018)
g <- 100
d <- data.frame(
  x = 0.05*(1:(3*g))) # ordered in x
d$y_ideal <- sin((0.3*d$x)^2)
d$y_observed <- d$y_ideal + 0.25*rnorm(length(d$y_ideal))



if(plot) {
  plt1 <- ggplot(data= d, aes(x = x)) + 
    geom_line(aes(y = y_ideal), linetype=2) +
    geom_point(aes(y = y_observed)) +
    ylab("y") +
    ggtitle("raw data", 
            subtitle = "dots: observed values, dashed line: unobserved true values")
  print(plt1)
}

x_cuts <- solve_for_partition(d$x, d$y_observed, penalty = 1)
print(x_cuts)

d$estimate <- approx(x_cuts$x, x_cuts$pred, xout = d$x, method = "linear", rule = 2)$y
d$group <- as.character(findInterval(d$x, x_cuts[x_cuts$what=="left", "x"]))

## ----r2, fig.height = 6, fig.width = 8, fig.align = "center"-------------
print(sum((d$y_observed - d$y_ideal)^2))

## ----r3, fig.height = 6, fig.width = 8, fig.align = "center"-------------
print(sum((d$estimate - d$y_ideal)^2))

## ----r4, fig.height = 6, fig.width = 8, fig.align = "center"-------------
print(sum((d$estimate - d$y_observed)^2))

## ----r5, fig.height = 6, fig.width = 8, fig.align = "center"-------------
if(plot) {
  plt2 <- ggplot(data= d, aes(x = x)) + 
    geom_line(aes(y = y_ideal), linetype=2) +
    geom_point(aes(y = y_observed, color = group)) +
    geom_line(aes(y = estimate, color = group)) +
    ylab("y") +
    ggtitle("RcppDynProg piecewise linear estimate",
            subtitle = "dots: observed values, segments: observed group means, dashed line: unobserved true values") + 
    theme(legend.position = "none")
  print(plt2)
}
