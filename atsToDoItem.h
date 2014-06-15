//
//  atsToDoItem.h
//  ToDoList
//
//  Created by Raymond Li on 6/15/14.
//
//

#import <Foundation/Foundation.h>

@interface atsToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
