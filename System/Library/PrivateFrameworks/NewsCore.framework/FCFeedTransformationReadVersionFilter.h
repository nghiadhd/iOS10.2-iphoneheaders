/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:17 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSDictionary, NSString;

@interface FCFeedTransformationReadVersionFilter : NSObject <FCFeedTransforming> {

	NSDictionary* _readArticles;

}

@property (nonatomic,copy) NSDictionary * readArticles;              //@synthesize readArticles=_readArticles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(NSDictionary *)readArticles;
-(id)initWithReadArticles:(id)arg1 ;
-(void)setReadArticles:(NSDictionary *)arg1 ;
@end

