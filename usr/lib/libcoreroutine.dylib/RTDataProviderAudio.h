/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:37:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProviderDuet.h>

@interface RTDataProviderAudio : RTDataProviderDuet
+(id)sharedInstance;
+(id)providerName;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)supportedEventClasses;
-(id)initWithName:(id)arg1 purgeManager:(id)arg2 ;
-(id)supportedEventStreams;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
@end

