/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:52 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class AKController, UITableView, NSArray, NSString;

@interface AKLineStylesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	AKController* _controller;
	UITableView* _tableView;
	NSArray* _lineWidthTags;

}

@property (assign,nonatomic,__weak) AKController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * lineWidthTags;                       //@synthesize lineWidthTags=_lineWidthTags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateLineImageForTag:(long long)arg1 selected:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)setLineWidthTags:(NSArray *)arg1 ;
-(NSArray *)lineWidthTags;
-(long long)currentLineWidthTag;
-(void)selectRowForTag:(long long)arg1 ;
-(void)selectedLineWidthChanged:(long long)arg1 ;
@end

