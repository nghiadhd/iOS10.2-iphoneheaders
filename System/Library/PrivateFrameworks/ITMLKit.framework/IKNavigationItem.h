/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:56:54 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKAppDocument, NSDictionary;

@interface IKNavigationItem : NSObject {

	IKAppDocument* _document;
	NSDictionary* _options;

}

@property (nonatomic,retain) IKAppDocument * document;              //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(IKAppDocument *)document;
-(void)setDocument:(IKAppDocument *)arg1 ;
-(id)initWithDocument:(id)arg1 presentationOptions:(id)arg2 ;
@end

