/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBNetworkSessionList : PBCodable <FCKeyValueStoreCoding, NSCopying> {

	NSMutableArray* _networkEvents;
	NSMutableArray* _networkSessions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSMutableArray * networkSessions;              //@synthesize networkSessions=_networkSessions - In the implementation block
@property (nonatomic,retain) NSMutableArray * networkEvents;                //@synthesize networkEvents=_networkEvents - In the implementation block
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(Class)networkSessionsType;
+(Class)networkEventsType;
-(void)writeToKeyValuePair:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)networkEventsCount;
-(void)clearNetworkEvents;
-(id)networkEventsAtIndex:(unsigned long long)arg1 ;
-(void)addNetworkEvents:(id)arg1 ;
-(NSMutableArray *)networkSessions;
-(NSMutableArray *)networkEvents;
-(void)setNetworkSessions:(NSMutableArray *)arg1 ;
-(void)setNetworkEvents:(NSMutableArray *)arg1 ;
-(void)addNetworkSessions:(id)arg1 ;
-(void)clearNetworkSessions;
-(unsigned long long)networkSessionsCount;
-(id)networkSessionsAtIndex:(unsigned long long)arg1 ;
@end

