/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:13 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface SKAttribute : NSObject <NSCoding> {

	long long _type;
	NSString* _name;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _nameString;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) long long type; 
+(id)attributeWithName:(id)arg1 type:(long long)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(long long)type;
-(id)initWithName:(id)arg1 type:(long long)arg2 ;
-(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)getNameString;
@end

