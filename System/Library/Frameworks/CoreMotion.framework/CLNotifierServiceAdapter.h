/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:50 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CLIntersiloService.h>
#import <libobjc.A.dylib/CLNotifierServiceProtocol.h>

@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol> {

	map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int> > >* _clients;
	CLNotifierBase* _notifier;

}

@property (nonatomic,readonly) CLNotifierBase* notifier;              //@synthesize notifier=_notifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL valid; 
-(CLNotifierBase*)notifier;
-(NSString *)debugDescription;
-(void)invalidate;
-(void)register:(R)arg1 forNotification:(id)arg2 registrationInfo:(int)arg3 :(id)arg4 ;
-(void)unregister:(R)arg1 forNotification:(id)arg2 :(int)arg3 ;
-(void)forget:(R)arg1 :(id)arg2 ;
-(void)setAdaptedNotifier:(CLNotifierBase*)arg1 ;
-(id)initInSilo:(id)arg1 ;
-(int)notifierClientNumForCoparty:(id)arg1 ;
@end

