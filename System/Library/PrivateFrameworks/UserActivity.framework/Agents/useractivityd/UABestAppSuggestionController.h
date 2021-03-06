/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:14 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface UABestAppSuggestionController : UACornerActionManagerHandler <NSXPCListenerDelegate> {

	NSXPCListener* _bestAppsListener;

}

@property (retain) NSXPCListener * bestAppsListener;                //@synthesize bestAppsListener=_bestAppsListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(void)setBestAppsListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)bestAppsListener;
-(BOOL)suspend;
-(BOOL)resume;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(BOOL)terminate;
@end

