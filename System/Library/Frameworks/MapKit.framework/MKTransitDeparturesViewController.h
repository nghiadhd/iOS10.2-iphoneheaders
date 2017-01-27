/*
* This header is generated by classdump-dyld 1.0
* on Friday, January 27, 2017 at 2:55:01 PM Japan Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/_MKTableViewController.h>
#import <libobjc.A.dylib/_MKTransitConnectionCellDelegate.h>
#import <libobjc.A.dylib/MKTransitDeparturesCellDelegate.h>
#import <libobjc.A.dylib/MKDynamicTransitUIContainer.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKTransitDepaturesViewControllerDelegate;
@class NSMutableDictionary, NSMutableSet, NSMapTable, NSString, NSMutableArray, MKTransitItemIncidentsController, MKMapItem, NSDate;

@interface MKTransitDeparturesViewController : _MKTableViewController <_MKTransitConnectionCellDelegate, MKTransitDeparturesCellDelegate, MKDynamicTransitUIContainer, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	NSMutableDictionary* _sectionControllers;
	NSMutableSet* _pagedSectionIdentifiers;
	NSMapTable* _cachedSectionHeaders;
	BOOL _fetchingTransitInfo;
	BOOL _lastInfoRefreshFailed;
	NSString* _infoRefreshErrorDescription;
	NSMutableArray* _sections;
	NSMutableDictionary* _cachedSequencesForSection;
	NSMapTable* _cachedDirectionsForSystem;
	NSMapTable* _cachedSystemHasInactiveLines;
	NSMutableDictionary* _cachedMaxImageWidths;
	NSMutableDictionary* _cachedColumnCenteringWidths;
	CGRect _lastMaxWidthBounds;
	MKTransitItemIncidentsController* _incidentsController;
	NSMutableArray* _shownIncidentTitles;
	NSMutableSet* _hiddenSections;
	BOOL _isTransitioningSize;
	CGSize _newSize;
	BOOL _animatingRowInsertion;
	BOOL _showDisambiguation;
	BOOL _allowsTransitLineSelection;
	BOOL _isInSiri;
	MKMapItem* _mapItem;
	NSDate* _departureCutoffDate;
	NSDate* _lastCutoffDateWithValidSchedule;
	id<MKTransitDepaturesViewControllerDelegate> _delegate;
	long long _lastFailureDiagnosis;

}

@property (assign,nonatomic) BOOL showDisambiguation;                                                   //@synthesize showDisambiguation=_showDisambiguation - In the implementation block
@property (nonatomic,readonly) BOOL allowsTransitLineSelection;                                         //@synthesize allowsTransitLineSelection=_allowsTransitLineSelection - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                       //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                              //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * lastCutoffDateWithValidSchedule;                                  //@synthesize lastCutoffDateWithValidSchedule=_lastCutoffDateWithValidSchedule - In the implementation block
@property (assign,nonatomic) BOOL isInSiri;                                                             //@synthesize isInSiri=_isInSiri - In the implementation block
@property (assign,nonatomic) long long lastFailureDiagnosis;                                            //@synthesize lastFailureDiagnosis=_lastFailureDiagnosis - In the implementation block
@property (assign,nonatomic,__weak) id<MKTransitDepaturesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MKTransitDepaturesViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MKTransitDepaturesViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(double)_heightForFooterInSection:(long long)arg1 ;
-(id)_viewForHeaderInSection:(long long)arg1 ;
-(id)_viewForFooterInSection:(long long)arg1 ;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)_transitInfoUpdated;
-(id)_blockedIncidentEntities;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(NSDate *)departureCutoffDate;
-(id)initWithMapItem:(id)arg1 allowTransitLineSelection:(BOOL)arg2 ;
-(void)_localeDidChange;
-(void)transitUIReferenceTimeUpdated:(id)arg1 ;
-(void)incidentButtonSelectedInDeparturesCell:(id)arg1 ;
-(void)infoButtonSelectedInConnectionCell:(id)arg1 ;
-(void)_updateDepartureCutoffDate;
-(id)_identifierForSequence:(id)arg1 ;
-(id)_identifierForSystem:(id)arg1 ;
-(id)_identifierForSection:(long long)arg1 ;
-(long long)_sectionForIdentifier:(id)arg1 ;
-(void)_sectionHeaderButtonPressed:(id)arg1 ;
-(void)_incrementPageControlValueForSection:(long long)arg1 identifier:(id)arg2 ;
-(BOOL)_shouldPageSection:(long long)arg1 ;
-(void)_refreshTransitInfoIfNeeded;
-(void)_refreshTransitInfoIfNeededForIncidents:(BOOL)arg1 ;
-(BOOL)_isInfoExpired;
-(BOOL)_isStuckWithExpiredInfo;
-(void)_refreshCells;
-(long long)_sectionTypeForSection:(long long)arg1 ;
-(BOOL)_hasConnectionsSection;
-(BOOL)_hasPlaceCardMessageSection;
-(BOOL)_hasIncidentsSection;
-(id)_departureSequenceForIndexPath:(id)arg1 ;
-(id)_departureCutoffDateForLine:(id)arg1 ;
-(id)_departureCutoffDateForSequence:(id)arg1 ;
-(id)_incidentsFilteredToOnePerLine:(BOOL)arg1 ;
-(id)_dominantIncidentForSequence:(id)arg1 ;
-(BOOL)_systemHasIncidents:(id)arg1 ;
-(id)_departureSequenceForIndexPath:(id)arg1 outIsNewLine:(BOOL*)arg2 outNextLineIsSame:(BOOL*)arg3 ;
-(long long)_numberOfDeparturesSectionsForSystem:(id)arg1 ;
-(BOOL)_systemHasInactiveLines:(id)arg1 ;
-(id)_inactiveLinesForSystem:(id)arg1 ;
-(long long)_sectionsCount;
-(void)_rebuildSections;
-(id)_systemForSection:(long long)arg1 directionIndex:(out long long*)arg2 ;
-(BOOL)_isLastSectionForSystem:(long long)arg1 ;
-(id)_systemForSection:(long long)arg1 ;
-(id)_departureSequencesForSection:(long long)arg1 ;
-(id)_directionsForSystem:(id)arg1 hasSequencesWithNoDirection:(out BOOL*)arg2 ;
-(id)_directionForSection:(long long)arg1 ;
-(id)_inactiveLinesControllerForSection:(long long)arg1 ;
-(id)_departuresControllerForSection:(long long)arg1 ;
-(id)_controllerForSection:(long long)arg1 ;
-(BOOL)_sectionHasHeader:(long long)arg1 ;
-(BOOL)_sectionHasFooter:(long long)arg1 ;
-(id)_pagingPromptForSection:(long long)arg1 ;
-(void)_incidentDetailsButtonSelected;
-(id)_smallerImageWithArtworkDataSource:(id)arg1 ;
-(id)_imageWithArtworkDataSource:(id)arg1 ;
-(BOOL)_isCompressedWithTraits:(id)arg1 ;
-(BOOL)_isCompressed;
-(long long)_lineImageSizeForSection:(long long)arg1 ;
-(id)_imageForLine:(id)arg1 size:(long long)arg2 ;
-(id)_imageForLine:(id)arg1 inSection:(long long)arg2 ;
-(BOOL)_isImageCandidateForColumnCentering:(id)arg1 source:(id)arg2 ;
-(double)_columnCenteringImageWidthForSection:(long long)arg1 ;
-(double)_maxImageWidthForSection:(long long)arg1 ;
-(double)_maxImageWidthForSection:(long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)_startEndDatesForSequence:(id)arg1 date:(id)arg2 ;
-(id)_operatingHoursDescriptionForSequence:(id)arg1 ;
-(void)_configureDeparturesCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_configureLeadingForDeparturesCell:(id)arg1 width:(double)arg2 compressed:(BOOL)arg3 ;
-(id)_messageCellForSection:(long long)arg1 ;
-(id)_connectionCellForRow:(long long)arg1 ;
-(id)_incidentCellForRow:(long long)arg1 ;
-(id)_indexPathWithoutHeader:(id)arg1 ;
-(id)_indexPathWithHeader:(id)arg1 ;
-(id)_cellForRowAtIndexPath:(id)arg1 ;
-(void)recordIncidentShown:(id)arg1 system:(id)arg2 ;
-(int)currentTransitCategory;
-(int)_transitCategoryForSection:(long long)arg1 ;
-(int)transitCategoryForFrequencyType:(long long)arg1 ;
-(int)_transitCategoryForSequence:(id)arg1 ;
-(long long)_departureSequenceFrequencyTypeForAllDeparturesSections;
-(long long)_departureSequenceFrequencyTypeForSection:(long long)arg1 ;
-(BOOL)showDisambiguation;
-(void)setShowDisambiguation:(BOOL)arg1 ;
-(BOOL)allowsTransitLineSelection;
-(NSDate *)lastCutoffDateWithValidSchedule;
-(void)setLastCutoffDateWithValidSchedule:(NSDate *)arg1 ;
-(BOOL)isInSiri;
-(void)setIsInSiri:(BOOL)arg1 ;
-(long long)lastFailureDiagnosis;
-(void)setLastFailureDiagnosis:(long long)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
@end

