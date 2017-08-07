//
//  AppDelegate.h
//  dovob
//
//  Created by 艾海涛 on 29/6/2017.
//  Copyright © 2017 艾海涛. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

