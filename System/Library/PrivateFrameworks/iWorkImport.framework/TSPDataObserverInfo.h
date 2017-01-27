/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSPData;

@interface TSPDataObserverInfo : NSObject {

	id _observer;
	TSPData* _data;
	/*^block*/id _completionHandler;
	BOOL _isInternalObserver;
	unsigned long long _options;

}

@property (nonatomic,readonly) unsigned long long options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) BOOL isInternalObserver;                 //@synthesize isInternalObserver=_isInternalObserver - In the implementation block
-(BOOL)shouldNotifyStatus:(long long)arg1 ;
-(BOOL)shouldClearObserverForStatus:(long long)arg1 ;
-(id)initWithObserver:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3 isInternalObserver:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)notifyWithStatus:(long long)arg1 info:(id)arg2 ;
-(id)init;
-(unsigned long long)options;
-(BOOL)isInternalObserver;
@end

