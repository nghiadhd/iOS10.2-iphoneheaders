/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:58 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPMutableHistoryEntry.h>
#import <libobjc.A.dylib/MSPHistoryEntrySearch.h>

@class NSString, GEOMapRegion;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch> {

	BOOL _failed;

}

@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * locationDisplayString; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,copy) GEOMapRegion * mapRegion; 
@property (assign,getter=isFailed,nonatomic) BOOL failed;                 //@synthesize failed=_failed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
-(id)initWithTicket:(id)arg1 ;
-(NSString *)query;
-(NSString *)languageCode;
-(void)setQuery:(NSString *)arg1 ;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)initWithStorage:(id)arg1 ;
-(void)setFailed:(BOOL)arg1 ;
-(id)transferToImmutableIfValidWithError:(out id*)arg1 ;
-(BOOL)_isUserVisibleDuplicateOfSameClassObject:(id)arg1 ;
-(void)setLocationDisplayString:(NSString *)arg1 ;
-(BOOL)isFailed;
-(NSString *)locationDisplayString;
@end

