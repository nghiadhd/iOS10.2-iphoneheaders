/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUURLTrackerFilePresenter, NSURL;

@interface TSUURLTracker : NSObject {

	TSUURLTrackerFilePresenter* _filePresenter;

}

@property (copy,readonly) NSURL * URL; 
-(id)init;
-(void)dealloc;
-(id)description;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)stop;
-(NSURL *)URL;
-(void)start;
-(id)initWithURL:(id)arg1 ;
@end

