/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPDaemonQueryDelegate <NSObject>
@optional
-(void)searchDaemonQuery:(id)arg1 gotResultSet:(id)arg2 replace:(BOOL)arg3 complete:(BOOL)arg4 finished:(BOOL)arg5 blendingDuration:(double)arg6 geoEntityString:(id)arg7;

@required
-(void)searchDaemonQuery:(id)arg1 encounteredError:(id)arg2;
-(void)searchDaemonRankingLog:(id)arg1;
-(void)searchDaemonSuggestionsArray:(id)arg1;

@end

