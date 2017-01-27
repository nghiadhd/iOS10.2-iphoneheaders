/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:57:31 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSLocale;

@interface CSLEmail : NSObject {

	BOOL _bias;
	NSString* _subject;
	NSString* _body;
	NSString* _label;
	NSArray* _features;
	NSLocale* _locale;

}

@property (nonatomic,retain) NSString * subject;              //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * body;                 //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * label;                //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * features;              //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) NSLocale * locale;               //@synthesize locale=_locale - In the implementation block
@property (assign) BOOL bias;                                 //@synthesize bias=_bias - In the implementation block
-(id)description;
-(void)setLocale:(NSLocale *)arg1 ;
-(BOOL)bias;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(NSLocale *)locale;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSArray *)features;
-(void)setFeatures:(NSArray *)arg1 ;
-(id)initWithSubject:(id)arg1 body:(id)arg2 label:(id)arg3 locale:(id)arg4 ;
-(id)initWithSubject:(id)arg1 body:(id)arg2 locale:(id)arg3 ;
-(id)initWithBody:(id)arg1 label:(id)arg2 locale:(id)arg3 ;
-(void)setBias:(BOOL)arg1 ;
-(id)initWithBody:(id)arg1 locale:(id)arg2 ;
@end

