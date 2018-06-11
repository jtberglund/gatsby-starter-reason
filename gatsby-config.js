module.exports = {
  siteMetadata: {
    title: 'Gatsby Starter Reason',
  },
  plugins: [
    'gatsby-plugin-react-helmet',
    {
      resolve: 'gatsby-plugin-reason',
      options: {
        derivePathFromComponentName: true,
      },
    },
  ],
}
