/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:15 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@protocol CNObservable, CNCancelable;
@interface _CNSamplingObservable : CNObservable {

	id<CNObservable> _observable;
	id<CNObservable> _sampler;
	id _sample;
	id<CNCancelable> _timer;

}

@property (nonatomic,readonly) id<CNObservable> observable;              //@synthesize observable=_observable - In the implementation block
@property (nonatomic,readonly) id<CNObservable> sampler;                 //@synthesize sampler=_sampler - In the implementation block
@property (retain) id sample;                                            //@synthesize sample=_sample - In the implementation block
@property (retain) id<CNCancelable> timer;                               //@synthesize timer=_timer - In the implementation block
-(id<CNCancelable>)timer;
-(void)setTimer:(id<CNCancelable>)arg1 ;
-(id<CNObservable>)sampler;
-(void)sendSampleToObserver:(id)arg1 ;
-(void)receiveResult:(id)arg1 ;
-(id<CNObservable>)observable;
-(id)initWithObservable:(id)arg1 sampler:(id)arg2 ;
-(id)subscribe:(id)arg1 ;
-(void)setSample:(id)arg1 ;
-(id)sample;
@end

