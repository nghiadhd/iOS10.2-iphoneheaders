/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:28 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class RTEvent;

@interface RTDataProviderEventNotificationRealtime : RTNotification {

	RTEvent* _event;

}

@property (nonatomic,readonly) RTEvent * event;              //@synthesize event=_event - In the implementation block
-(RTEvent *)event;
-(id)initWithEvent:(id)arg1 ;
@end

