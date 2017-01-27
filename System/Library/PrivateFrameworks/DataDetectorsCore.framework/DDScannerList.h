/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:26 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface DDScannerList : NSObject {

	int _type;
	NSMutableArray* _waitQueue;
	NSMutableArray* _scannerCache;
	NSMutableArray* _activeScanners;

}
-(void)dealloc;
-(id)initWithType:(int)arg1 ;
-(void)enqueueJob:(/*^block*/id)arg1 ;
-(id)getCachedScanner;
-(void)activateScanner:(id)arg1 ;
-(void)pushBackScanner:(id)arg1 ;
-(/*^block*/id)dequeueJob;
-(BOOL)full;
-(id)scanner;
@end

