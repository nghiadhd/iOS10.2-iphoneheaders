/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:07 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VMUStackLogReader : NSObject {

	unsigned _task;
	BOOL _usesLiteMode;

}

@property (readonly) BOOL usesLiteMode;              //@synthesize usesLiteMode=_usesLiteMode - In the implementation block
+(BOOL)isLiteZone:(id)arg1 ;
-(void)dealloc;
-(id)initWithTask:(unsigned)arg1 ;
-(int)enumerateRecordsWithEnumerator:(void*)arg1 context:(void*)arg2 ;
-(unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 ;
-(long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(BOOL)arg3 stackFramesBuffer:(unsigned long long*)arg4 ;
-(BOOL)usesLiteMode;
@end

