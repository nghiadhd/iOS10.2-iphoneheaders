/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:58:22 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMNode.h>

@class NSString, DOMNamedNodeMap;

@interface DOMDocumentType : DOMNode

@property (copy,readonly) NSString * name; 
@property (readonly) DOMNamedNodeMap * entities; 
@property (readonly) DOMNamedNodeMap * notations; 
@property (copy,readonly) NSString * publicId; 
@property (copy,readonly) NSString * systemId; 
@property (copy,readonly) NSString * internalSubset; 
-(DOMNamedNodeMap *)notations;
-(NSString *)publicId;
-(NSString *)systemId;
-(NSString *)internalSubset;
-(NSString *)name;
-(void)remove;
-(DOMNamedNodeMap *)entities;
@end

