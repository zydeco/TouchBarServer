//
//  AppDelegate.h
//  TouchBarServer
//
//  Created by Jesús A. Álvarez on 28/10/2016.
//  Copyright © 2016 namedfork. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (weak, nonatomic) IBOutlet NSWindow *mainWindow;

- (IBAction)startServer:(id)sender;
- (IBAction)showHelp:(id)sender;

@end

