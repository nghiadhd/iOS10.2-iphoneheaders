/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:12 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TimeSync/TSgPTPFDPtPPort.h>

@class NSString;

@interface TSgPTPUDPv6PtPPort : TSgPTPFDPtPPort {

	NSString* _interfaceName;

}

@property (nonatomic,copy,readonly) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
+(id)diagnosticDescriptionForService:(unsigned)arg1 withIndent:(id)arg2 ;
+(id)iokitMatchingDictionaryForInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
-(void)dealloc;
-(NSString *)interfaceName;
-(id)initWithMatchingDictionary:(id)arg1 ;
-(id)initWithInterfaceName:(id)arg1 andIPv6Address:(char*)arg2 ;
@end

