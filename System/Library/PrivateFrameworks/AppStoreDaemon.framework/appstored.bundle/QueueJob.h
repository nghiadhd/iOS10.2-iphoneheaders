/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:53 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/InternalJob.h>

@interface QueueJob : InternalJob {

	BOOL _isAutoDownload;

}

@property (nonatomic,readonly) BOOL isAutoDownload;                 //@synthesize isAutoDownload=_isAutoDownload - In the implementation block
@property (nonatomic,readonly) BOOL isPendingApproval; 
-(id)initJobAsAutoDownload:(BOOL)arg1 withActivity:(id)arg2 ;
-(BOOL)isAutoDownload;
-(BOOL)isPendingApproval;
@end

