/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:30 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NCNotificationSource.h>

@class NCNotificationDispatcher, NSString;

@interface SBWalletNotificationSource : NSObject <NCNotificationSource> {

	NCNotificationDispatcher* _dispatcher;

}

@property (nonatomic,retain) NCNotificationDispatcher * dispatcher;              //@synthesize dispatcher=_dispatcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)postNotificationRequestForCardItem:(id)arg1 ;
-(void)modifyNotificationRequestForCardItem:(id)arg1 ;
-(void)withdrawNotificationRequestForCardItem:(id)arg1 ;
-(NCNotificationDispatcher *)dispatcher;
-(void)setDispatcher:(NCNotificationDispatcher *)arg1 ;
-(id)initWithDispatcher:(id)arg1 ;
@end

