/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SYChangeSerializer <NSObject>
@optional
-(id)SYObjectWithData:(id)arg1;
-(id)decodeChangeData:(id)arg1 fromProtocolVersion:(long long)arg2 ofType:(long long)arg3;
-(id)dataWithSYObject:(id)arg1;
-(id)encodeSYChangeForBackwardCompatibility:(id)arg1 protocolVersion:(long long)arg2;

@required
-(id)dataFromChange:(id)arg1;
-(id)changeFromData:(id)arg1 ofType:(long long)arg2;

@end

