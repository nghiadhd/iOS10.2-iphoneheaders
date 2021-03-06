/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:21 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIndoorDelegateProtocol <NSObject>
@optional
-(void)indoorIsUncertainWithLocation:(id)arg1;
-(void)indoorGivesUpWithLocation:(id)arg1;
-(void)indoorAssetDownloadProgress:(float)arg1;
-(void)indoorDidFailWithError:(id)arg1;

@required
-(void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2;

@end

