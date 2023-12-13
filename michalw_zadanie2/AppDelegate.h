//
//  AppDelegate.h
//  michalw_zadanie2
//
//  Created by student on 16/11/2023.
//  Copyright © 2023 D. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

