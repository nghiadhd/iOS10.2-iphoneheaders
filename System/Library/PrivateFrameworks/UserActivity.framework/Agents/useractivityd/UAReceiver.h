/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>

@class NSSet;

@interface UAReceiver : UACornerActionManagerHandler {

	NSSet* scanningForTypes;

}

@property (readonly) BOOL receiving; 
@property (copy) NSSet * scanningForTypes; 
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(id)receivedItems;
-(BOOL)receiving;
-(NSSet *)scanningForTypes;
-(void)setScanningForTypes:(NSSet *)arg1 ;
-(id)statusString;
-(BOOL)terminate;
@end

