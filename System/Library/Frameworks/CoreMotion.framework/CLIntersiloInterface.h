/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:49 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreMotion/CoreMotion-Structs.h>
@class Protocol;

@interface CLIntersiloInterface : NSObject {

	map<SEL *, CLIntersiloInterfaceSelectorInfo *, std::__1::less<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, CLIntersiloInterfaceSelectorInfo *> > >* _selectors;
	Protocol* _protocol;

}

@property (nonatomic,readonly) Protocol * protocol;              //@synthesize protocol=_protocol - In the implementation block
+(id)interfaceWithProtocol:(id)arg1 base:(id)arg2 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)debugDescription;
-(Protocol *)protocol;
-(id)initWithProtocol:(id)arg1 base:(id)arg2 ;
-(id)getInfoForSelector:(SEL)arg1 ;
@end

