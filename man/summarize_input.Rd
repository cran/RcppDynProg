% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{summarize_input}
\alias{summarize_input}
\title{Summarize data (for debugging).}
\usage{
summarize_input(x, y, w, i, j, skip)
}
\arguments{
\item{x}{NumericVector, expanatory variable.}

\item{y}{NumericVector, 0/1 values to fit.}

\item{w}{NumericVector, weights (required, positive).}

\item{i}{integer, first index (inclusive).}

\item{j}{integer, last index (inclusive).}

\item{skip}{integer, index to skip (-1 to not skip).}
}
\value{
summary list
}
\description{
Summarize data (for debugging).
}
\examples{

costs <- matrix(c(1.5, NA ,NA ,1 ,0 , NA, 5, -1, 1), nrow = 3)
solve_interval_partition(costs, nrow(costs))

}
\keyword{internal}
