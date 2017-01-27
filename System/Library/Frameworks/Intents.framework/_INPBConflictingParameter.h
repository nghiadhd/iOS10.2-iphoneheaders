/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:54:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString;

@interface _INPBConflictingParameter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _alternateItems;
	NSString* _keyPath;

}

@property (nonatomic,readonly) BOOL hasKeyPath; 
@property (nonatomic,retain) NSString * keyPath;                             //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) NSMutableArray * alternateItems;                //@synthesize alternateItems=_alternateItems - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
+(Class)alternateItemsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addAlternateItems:(id)arg1 ;
-(BOOL)hasKeyPath;
-(void)clearAlternateItems;
-(unsigned long long)alternateItemsCount;
-(id)alternateItemsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)alternateItems;
-(void)setAlternateItems:(NSMutableArray *)arg1 ;
@end

