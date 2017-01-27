/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:23 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebNetworkStateObserver : NSObject {

	const NetworkStateNotifier* _notifier;

}

@property (assign,nonatomic) const NetworkStateNotifier* notifier;              //@synthesize notifier=_notifier - In the implementation block
-(void)networkStateChanged:(id)arg1 ;
-(id)initWithNotifier:(const NetworkStateNotifier*)arg1 ;
-(const NetworkStateNotifier*)notifier;
-(void)setNotifier:(const NetworkStateNotifier*)arg1 ;
-(void)dealloc;
@end

