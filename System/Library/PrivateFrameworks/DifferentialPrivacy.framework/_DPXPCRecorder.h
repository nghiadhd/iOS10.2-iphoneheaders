/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:27 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/_DPDataRecorder.h>

@class _DPDaemonConnection;

@interface _DPXPCRecorder : _DPDataRecorder {

	_DPDaemonConnection* _connection;

}

@property (nonatomic,readonly) _DPDaemonConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(_DPDaemonConnection *)connection;
-(id)initWithKey:(id)arg1 ;
-(void)recordNumbers:(id)arg1 ;
-(void)recordStrings:(id)arg1 ;
-(void)recordWords:(id)arg1 ;
@end

