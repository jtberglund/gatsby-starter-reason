import { StaticQuery, graphql } from 'gatsby'

import MainPage from './MainPage.re'
import React from 'react'

export default props => (
  <StaticQuery
    query={graphql`
      query SiteTitleQuery {
        site {
          siteMetadata {
            title
          }
        }
      }
    `}
    render={data => <MainPage {...props} data={data} />}
  />
)
