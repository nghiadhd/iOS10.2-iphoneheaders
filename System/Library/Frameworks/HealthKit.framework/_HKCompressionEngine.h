/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:57 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _HKStreamingDestination;
#import <HealthKit/HealthKit-Structs.h>
@class NSMutableData;

@interface _HKCompressionEngine : NSObject {

	int _operation;
	int _algorithm;
	NSMutableData* _sinkContent;
	id<_HKStreamingDestination> _destination;
	NSMutableData* _destinationBuffer;
	SCD_Struct_HK9* _stream;

}

@property (assign,nonatomic) int operation;                                               //@synthesize operation=_operation - In the implementation block
@property (assign,nonatomic) int algorithm;                                               //@synthesize algorithm=_algorithm - In the implementation block
@property (assign,nonatomic,__weak) id<_HKStreamingDestination> destination;              //@synthesize destination=_destination - In the implementation block
@property (nonatomic,retain) NSMutableData * destinationBuffer;                           //@synthesize destinationBuffer=_destinationBuffer - In the implementation block
@property (assign,nonatomic) SCD_Struct_HK9* stream;                                      //@synthesize stream=_stream - In the implementation block
@property (nonatomic,readonly) NSMutableData * sinkContent;                               //@synthesize sinkContent=_sinkContent - In the implementation block
+(id)processDataWithFunction:(long long)arg1 algorithm:(long long)arg2 content:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
-(int)operation;
-(void)setOperation:(int)arg1 ;
-(id<_HKStreamingDestination>)destination;
-(void)setDestination:(id<_HKStreamingDestination>)arg1 ;
-(int)algorithm;
-(id)initWithFunction:(long long)arg1 algorithm:(long long)arg2 destination:(id)arg3 ;
-(BOOL)_processIncomingData:(const void*)arg1 length:(unsigned long long)arg2 flags:(int)arg3 ;
-(void)sourceContentFinished;
-(NSMutableData *)sinkContent;
-(void)_decodeEngineFunction:(long long)arg1 algorithm:(long long)arg2 ;
-(BOOL)_initializeStream;
-(void)_gatherReadSinkContent:(id)arg1 ;
-(unsigned long long)_deliverDestinationContent;
-(void)writeSourceContent:(id)arg1 ;
-(void)setAlgorithm:(int)arg1 ;
-(NSMutableData *)destinationBuffer;
-(void)setDestinationBuffer:(NSMutableData *)arg1 ;
-(SCD_Struct_HK9*)stream;
-(void)setStream:(SCD_Struct_HK9*)arg1 ;
@end

