/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/XPCClient.h>

@class NSSet;

@interface PreorderQueueClient : XPCClient {

	NSSet* _itemKinds;

}

@property (copy) NSSet * itemKinds; 
-(void)setItemKinds:(NSSet *)arg1 ;
-(BOOL)supportsItemKind:(id)arg1 ;
-(NSSet *)itemKinds;
-(void)dealloc;
@end

