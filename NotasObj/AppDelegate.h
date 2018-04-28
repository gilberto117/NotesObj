//
//  AppDelegate.h
//  NotasObj
//
//  Created by Gilberto Escareño Barrera on 26/04/18.
//  Copyright © 2018 Gilberto Escareño Barrera. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

