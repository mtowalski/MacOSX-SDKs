//
//  ABSearchElement.h
//  AddressBook Framework
//
//  Copyright (c) 2002 Apple Computer. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <AddressBook/ABTypedefs.h>
#import <AddressBook/ABGlobals.h>

@class ABRecord;

// ================================================================================
//	interface ABSearchElement : NSObject
// ================================================================================
// Use -[ABPerson searchElementForProperty:...] and -[ABGroup searchElementForProperty:...] to create
// search elements on ABPerson and ABGroup.

@interface ABSearchElement : NSObject

+ (ABSearchElement *)searchElementForConjunction:(ABSearchConjunction)conjuction children:(NSArray *)children;
    // Creates a search element combining several sub search element.
    // conjunction can be kABSearchAnd or kABSearchOr.
    // Raises of children is nil or empty

- (BOOL)matchesRecord:(ABRecord *)record;
    // Given a record returns YES is this record matches the search element
    // Raises if record is nil
@end
