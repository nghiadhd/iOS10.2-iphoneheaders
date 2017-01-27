/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:32 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASCategoryProtocol.h>

@protocol SKUIArtworkProviding;
@class NSString, NSNumber, NSArray;

@interface ASCategory : NSObject <ASCategoryProtocol> {

	NSString* _name;
	NSString* _shortName;
	NSString* _url;
	NSNumber* _genreId;
	NSNumber* _groupingId;
	NSArray* _children;
	NSArray* _items;
	NSString* _parentCategoryLabel;
	id<SKUIArtworkProviding> _cannedArtwork;

}

@property (nonatomic,copy) NSArray * items;                                      //@synthesize items=_items - In the implementation block
@property (nonatomic,copy) NSArray * children;                                   //@synthesize children=_children - In the implementation block
@property (nonatomic,copy) id<SKUIArtworkProviding> cannedArtwork;               //@synthesize cannedArtwork=_cannedArtwork - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentCategoryLabel;              //@synthesize parentCategoryLabel=_parentCategoryLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                        //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * genreId;                          //@synthesize genreId=_genreId - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * groupingId;                       //@synthesize groupingId=_groupingId - In the implementation block
+(id)categoriesForArray:(id)arg1 ;
+(id)preferredArtworkProviderForCategory:(id)arg1 preferredItemController:(id)arg2 ;
-(void)setCannedArtwork:(id<SKUIArtworkProviding>)arg1 ;
-(NSString *)parentCategoryLabel;
-(NSNumber *)genreId;
-(id<SKUIArtworkProviding>)cannedArtwork;
-(NSNumber *)groupingId;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)url;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(NSString *)shortName;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
@end

