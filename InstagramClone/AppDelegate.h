//
//  AppDelegate.h
//  InstagramClone
//
//  Created by NEXTAcademy on 12/6/17.
//  Copyright © 2017 asd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

