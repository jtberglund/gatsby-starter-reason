import './index.css'

import IndexLayout from './IndexLayout.re'
import { StaticQuery, graphql } from 'gatsby'

export default (children) => (
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
    render={(data) => (
      <IndexLayout {...data}>
        {children}
      </IndexLayout>
    )}
  />
)
