// eslint.config.js
module.exports = [
  {
    files: ['**/*.js'], // Specify files to lint
    ignores: ['coverage/'], // Ignore the coverage directory
    rules: {
      'no-unused-vars': 'warn',
      'no-console': 'off',
    },
  },
];
