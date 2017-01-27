/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:45 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CBScalablePipeManager, CBCentral, CBPeer, NSString, NSInputStream, NSOutputStream;

@interface CBScalablePipe : NSObject {

	CBScalablePipeManager* _pipeManager;
	int _socket;
	CBCentral* _central;
	CBPeer* _peer;
	NSString* _name;
	long long _type;
	long long _priority;
	NSInputStream* _input;
	NSOutputStream* _output;
	void* _channel;

}

@property (nonatomic,readonly) CBCentral * central;                  //@synthesize central=_central - In the implementation block
@property (nonatomic,readonly) CBPeer * peer;                        //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) long long type;                       //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long priority;                   //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSInputStream * input;                //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) NSOutputStream * output;              //@synthesize output=_output - In the implementation block
@property (nonatomic,readonly) void* channel;                        //@synthesize channel=_channel - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)type;
-(NSInputStream *)input;
-(long long)priority;
-(void*)channel;
-(void)setOrphan;
-(id)initWithPipeManager:(id)arg1 info:(id)arg2 ;
-(NSOutputStream *)output;
-(CBCentral *)central;
-(CBPeer *)peer;
@end

