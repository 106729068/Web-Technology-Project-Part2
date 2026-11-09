<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta name="description" content="Ecopower sustainable energy careers">
    <title><?php echo htmlspecialchars($title); ?></title>
    <link href="styles/style.css" rel="stylesheet">
</head>
<body<?php if (!empty($body_class)) { echo ' class="' . htmlspecialchars($body_class) . '"'; } ?>>
    <header class="site-header">
        <div class="header-container navbar">
            <div class="brand-group">
                <img src="images/logo.png" alt="Ecopower Logo" class="logo-img">
                <h1 class="brand-title"> Ecopower</h1>
            </div>

            <?php include "nav.inc"; ?>
        </div>
    </header>
