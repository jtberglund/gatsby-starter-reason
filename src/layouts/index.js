import './index.css'

import IndexLayout from './IndexLayout.re'
import React from 'react'

export default IndexLayout

export const query = graphql`
  query SiteTitleQuery {
    site {
      siteMetadata {
        title
      }
    }
  }
`
