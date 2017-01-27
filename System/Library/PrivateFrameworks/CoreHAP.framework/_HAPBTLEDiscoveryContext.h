/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:20 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMapTable;

@interface _HAPBTLEDiscoveryContext : NSObject {

	long long _discoveryType;
	NSMutableArray* _discoveringServices;
	NSMutableArray* _discoveringCharacteristics;
	NSMutableArray* _readingCharacteristics;
	NSMutableArray* _discoveringDescriptors;
	NSMutableArray* _readingDescriptors;
	NSMutableArray* _readingSignatureCharacteristics;
	NSMutableArray* _readingSignatureServices;
	NSMapTable* _characteristicSignatures;
	NSMapTable* _serviceSignatures;
	long long _retries;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) long long discoveryType;                                       //@synthesize discoveryType=_discoveryType - In the implementation block
@property (nonatomic,readonly) NSMutableArray * discoveringServices;                          //@synthesize discoveringServices=_discoveringServices - In the implementation block
@property (nonatomic,readonly) NSMutableArray * discoveringCharacteristics;                   //@synthesize discoveringCharacteristics=_discoveringCharacteristics - In the implementation block
@property (nonatomic,readonly) NSMutableArray * readingCharacteristics;                       //@synthesize readingCharacteristics=_readingCharacteristics - In the implementation block
@property (nonatomic,readonly) NSMutableArray * discoveringDescriptors;                       //@synthesize discoveringDescriptors=_discoveringDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableArray * readingDescriptors;                           //@synthesize readingDescriptors=_readingDescriptors - In the implementation block
@property (nonatomic,readonly) NSMutableArray * readingSignatureCharacteristics;              //@synthesize readingSignatureCharacteristics=_readingSignatureCharacteristics - In the implementation block
@property (nonatomic,readonly) NSMutableArray * readingSignatureServices;                     //@synthesize readingSignatureServices=_readingSignatureServices - In the implementation block
@property (nonatomic,readonly) NSMapTable * characteristicSignatures;                         //@synthesize characteristicSignatures=_characteristicSignatures - In the implementation block
@property (nonatomic,readonly) NSMapTable * serviceSignatures;                                //@synthesize serviceSignatures=_serviceSignatures - In the implementation block
@property (assign,nonatomic) long long retries;                                               //@synthesize retries=_retries - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
@property (nonatomic,copy) id completionHandler;                                              //@synthesize completionHandler=_completionHandler - In the implementation block
-(id)init;
-(void)reset;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)retries;
-(void)setRetries:(long long)arg1 ;
-(BOOL)isComplete;
-(NSMutableArray *)discoveringServices;
-(NSMutableArray *)discoveringCharacteristics;
-(NSMutableArray *)readingCharacteristics;
-(NSMutableArray *)discoveringDescriptors;
-(NSMutableArray *)readingDescriptors;
-(NSMutableArray *)readingSignatureCharacteristics;
-(NSMutableArray *)readingSignatureServices;
-(NSMapTable *)characteristicSignatures;
-(NSMapTable *)serviceSignatures;
-(id)initWithDiscoveryType:(long long)arg1 ;
-(long long)discoveryType;
@end

