/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSSQLitePredicate;

@interface FinishDownloadsOperation : ISOperation {

	SSSQLitePredicate* _predicate;

}

@property (readonly) SSSQLitePredicate * finishedDownloadPredicate; 
-(id)initWithFinishedDownloadPredicate:(id)arg1 ;
-(SSSQLitePredicate *)finishedDownloadPredicate;
-(void)dealloc;
-(void)run;
@end

