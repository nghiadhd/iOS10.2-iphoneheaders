/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAccessibilityElementTraversalTreeLogger.h>

@class NSMutableString, NSMutableArray, NSString;

@interface UIAccessibilityInMemoryStringBasedTreeLogger : NSObject <UIAccessibilityElementTraversalTreeLogger> {

	NSMutableString* _stringRepresentation;
	NSMutableArray* _currentPrefix;
	NSString* _prefix;
	NSString* _descriptionKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)pop;
-(id)stringRepresentation;
-(void)logElement:(id)arg1 ;
-(void)push;
-(id)initWithPrefix:(id)arg1 elementDescriptionKey:(id)arg2 ;
-(id)initWithElementDescriptionKey:(id)arg1 ;
-(id)initWithPrefix:(id)arg1 ;
@end
