//
//  AutoTaxiAppDelegate.h
//  AutoTaxi
//
//  Created by Luis Eduardo Vélez Montoya on 26/03/2012.
//  Copyright (c) 2012 Virtual-Tec. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "MainViewController.h"
#import "TutorialViewController.h"
#import "AboutViewController.h"
#import "CoreDataController.h"
#import "HistoryCoreDataController.h"
#import "AppNavigationController.h"
#import "HistoryNavigationController.h"
#import "ConfigurationViewController.h"

@interface AutoTaxiAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    
    UIWindow *window;
    MainViewController *main;
    TutorialViewController *tutorial;
    AboutViewController *about;
    CoreDataController *coreDataController;
    HistoryCoreDataController *coreDataControllerHistory;
    AppNavigationController *coreDataNavigationController;
    HistoryNavigationController *coreDataNavigationControllerHistory;
    ConfigurationViewController *config;
    
@private
    NSManagedObjectContext *managedObjectContext_;
    NSManagedObjectModel *managedObjectModel_;
    NSPersistentStoreCoordinator *persistentStoreCoordinator_;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, strong) UITabBarController *tabBarController;
@property (nonatomic, strong) CoreDataController *coreDataController;
@property (nonatomic, strong) HistoryCoreDataController *coreDataControllerHistory;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (strong, nonatomic) MainViewController *main;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

- (void)switchToMainViewWithAddress:(NSString *)address;
- (void)setUpAppAfterUserRegistration;
- (void)setLabels;
-(void)displayAboutView;
-(void)displayTabView;

@end

