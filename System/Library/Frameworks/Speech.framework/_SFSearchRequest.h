/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/Speech.framework/Speech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface _SFSearchRequest : NSObject {

	long long _searchTypes;
	NSDictionary* _headerFields;
	NSDictionary* _queryParameters;

}

@property (assign,nonatomic) long long searchTypes;                     //@synthesize searchTypes=_searchTypes - In the implementation block
@property (nonatomic,copy) NSDictionary * headerFields;                 //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
-(NSDictionary *)queryParameters;
-(long long)searchTypes;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setSearchTypes:(long long)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)headerFields;
@end

