/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:11 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TUMetadataCacheDataProvider.h>

@class CXCallDirectoryManager;

@interface TUCallDirectoryMetadataCacheDataProvider : TUMetadataCacheDataProvider {

	CXCallDirectoryManager* _callDirectoryManager;

}

@property (nonatomic,retain) CXCallDirectoryManager * callDirectoryManager;              //@synthesize callDirectoryManager=_callDirectoryManager - In the implementation block
-(id)init;
-(void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2 ;
-(CXCallDirectoryManager *)callDirectoryManager;
-(void)setCallDirectoryManager:(CXCallDirectoryManager *)arg1 ;
@end

