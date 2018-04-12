// Word list created by Monero contributor Shrikez
// 
// Copyright (c) 2014-2018, The Monero Project
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

/*!
 * \file italian.h
 * 
 * \brief Italian word list and map.
 */

#ifndef ITALIAN_H
#define ITALIAN_H

#include <vector>
#include <unordered_map>
#include "language_base.h"
#include <string>

/*!
 * \namespace Language
 * \brief Mnemonic language related namespace.
 */
namespace Language
{
  class Italian: public Base
  {
  public:
    Italian(): Base("Italiano", std::vector<std::string>({
        "abbinare",
        "abbonato",
        "abisso",
        "abitare",
        "abominio",
        "accadere",
        "accesso",
        "acciaio",
        "accordo",
        "accumulo",
        "acido",
        "acqua",
        "acrobata",
        "acustico",
        "adattare",
        "addetto",
        "addio",
        "addome",
        "adeguato",
        "aderire",
        "adorare",
        "adottare",
        "adozione",
        "adulto",
        "aereo",
        "aerobica",
        "affare",
        "affetto",
        "affidare",
        "affogato",
        "affronto",
        "africano",
        "afrodite",
        "agenzia",
        "aggancio",
        "aggeggio",
        "aggiunta",
        "agio",
        "agire",
        "agitare",
        "aglio",
        "agnello",
        "agosto",
        "aiutare",
        "albero",
        "albo",
        "alce",
        "alchimia",
        "alcool",
        "alfabeto",
        "algebra",
        "alimento",
        "allarme",
        "alleanza",
        "allievo",
        "alloggio",
        "alluce",
        "alpi",
        "alterare",
        "altro",
        "aluminio",
        "amante",
        "amarezza",
        "ambiente",
        "ambrosia",
        "america",
        "amico",
        "ammalare",
        "ammirare",
        "amnesia",
        "amnistia",
        "amore",
        "ampliare",
        "amputare",
        "analisi",
        "anamnesi",
        "ananas",
        "anarchia",
        "anatra",
        "anca",
        "ancorato",
        "andare",
        "androide",
        "aneddoto",
        "anello",
        "angelo",
        "angolino",
        "anguilla",
        "anidride",
        "anima",
        "annegare",
        "anno",
        "annuncio",
        "anomalia",
        "antenna",
        "anticipo",
        "aperto",
        "apostolo",
        "appalto",
        "appello",
        "appiglio",
        "applauso",
        "appoggio",
        "appurare",
        "aprile",
        "aquila",
        "arabo",
        "arachidi",
        "aragosta",
        "arancia",
        "arbitrio",
        "archivio",
        "arco",
        "argento",
        "argilla",
        "aria",
        "ariete",
        "arma",
        "armonia",
        "aroma",
        "arrivare",
        "arrosto",
        "arsenale",
        "arte",
        "artiglio",
        "asfalto",
        "asfissia",
        "asino",
        "asparagi",
        "aspirina",
        "assalire",
        "assegno",
        "assolto",
        "assurdo",
        "asta",
        "astratto",
        "atlante",
        "atletica",
        "atomo",
        "atropina",
        "attacco",
        "attesa",
        "attico",
        "atto",
        "attrarre",
        "auguri",
        "aula",
        "aumento",
        "aurora",
        "auspicio",
        "autista",
        "auto",
        "autunno",
        "avanzare",
        "avarizia",
        "avere",
        "aviatore",
        "avido",
        "avorio",
        "avvenire",
        "avviso",
        "avvocato",
        "azienda",
        "azione",
        "azzardo",
        "azzurro",
        "babbuino",
        "bacio",
        "badante",
        "baffi",
        "bagaglio",
        "bagliore",
        "bagno",
        "balcone",
        "balena",
        "ballare",
        "balordo",
        "balsamo",
        "bambola",
        "bancomat",
        "banda",
        "barato",
        "barba",
        "barista",
        "barriera",
        "basette",
        "basilico",
        "bassista",
        "bastare",
        "battello",
        "bavaglio",
        "beccare",
        "beduino",
        "bellezza",
        "bene",
        "benzina",
        "berretto",
        "bestia",
        "bevitore",
        "bianco",
        "bibbia",
        "biberon",
        "bibita",
        "bici",
        "bidone",
        "bilancia",
        "biliardo",
        "binario",
        "binocolo",
        "biologia",
        "biondina",
        "biopsia",
        "biossido",
        "birbante",
        "birra",
        "biscotto",
        "bisogno",
        "bistecca",
        "bivio",
        "blindare",
        "bloccare",
        "bocca",
        "bollire",
        "bombola",
        "bonifico",
        "borghese",
        "borsa",
        "bottino",
        "botulino",
        "braccio",
        "bradipo",
        "branco",
        "bravo",
        "bresaola",
        "bretelle",
        "brevetto",
        "briciola",
        "brigante",
        "brillare",
        "brindare",
        "brivido",
        "broccoli",
        "brontolo",
        "bruciare",
        "brufolo",
        "bucare",
        "buddista",
        "budino",
        "bufera",
        "buffo",
        "bugiardo",
        "buio",
        "buono",
        "burrone",
        "bussola",
        "bustina",
        "buttare",
        "cabernet",
        "cabina",
        "cacao",
        "cacciare",
        "cactus",
        "cadavere",
        "caffe",
        "calamari",
        "calcio",
        "caldaia",
        "calmare",
        "calunnia",
        "calvario",
        "calzone",
        "cambiare",
        "camera",
        "camion",
        "cammello",
        "campana",
        "canarino",
        "cancello",
        "candore",
        "cane",
        "canguro",
        "cannone",
        "canoa",
        "cantare",
        "canzone",
        "caos",
        "capanna",
        "capello",
        "capire",
        "capo",
        "capperi",
        "capra",
        "capsula",
        "caraffa",
        "carbone",
        "carciofo",
        "cardigan",
        "carenza",
        "caricare",
        "carota",
        "carrello",
        "carta",
        "casa",
        "cascare",
        "caserma",
        "cashmere",
        "casino",
        "cassetta",
        "castello",
        "catalogo",
        "catena",
        "catorcio",
        "cattivo",
        "causa",
        "cauzione",
        "cavallo",
        "caverna",
        "caviglia",
        "cavo",
        "cazzotto",
        "celibato",
        "cemento",
        "cenare",
        "centrale",
        "ceramica",
        "cercare",
        "ceretta",
        "cerniera",
        "certezza",
        "cervello",
        "cessione",
        "cestino",
        "cetriolo",
        "chiave",
        "chiedere",
        "chilo",
        "chimera",
        "chiodo",
        "chirurgo",
        "chitarra",
        "chiudere",
        "ciabatta",
        "ciao",
        "cibo",
        "ciccia",
        "cicerone",
        "ciclone",
        "cicogna",
        "cielo",
        "cifra",
        "cigno",
        "ciliegia",
        "cimitero",
        "cinema",
        "cinque",
        "cintura",
        "ciondolo",
        "ciotola",
        "cipolla",
        "cippato",
        "circuito",
        "cisterna",
        "citofono",
        "ciuccio",
        "civetta",
        "civico",
        "clausola",
        "cliente",
        "clima",
        "clinica",
        "cobra",
        "coccole",
        "cocktail",
        "cocomero",
        "codice",
        "coesione",
        "cogliere",
        "cognome",
        "colla",
        "colomba",
        "colpire",
        "coltello",
        "comando",
        "comitato",
        "commedia",
        "comodino",
        "compagna",
        "comune",
        "concerto",
        "condotto",
        "conforto",
        "congiura",
        "coniglio",
        "consegna",
        "conto",
        "convegno",
        "coperta",
        "copia",
        "coprire",
        "corazza",
        "corda",
        "corleone",
        "cornice",
        "corona",
        "corpo",
        "corrente",
        "corsa",
        "cortesia",
        "corvo",
        "coso",
        "costume",
        "cotone",
        "cottura",
        "cozza",
        "crampo",
        "cratere",
        "cravatta",
        "creare",
        "credere",
        "crema",
        "crescere",
        "crimine",
        "criterio",
        "croce",
        "crollare",
        "cronaca",
        "crostata",
        "croupier",
        "cubetto",
        "cucciolo",
        "cucina",
        "cultura",
        "cuoco",
        "cuore",
        "cupido",
        "cupola",
        "cura",
        "curva",
        "cuscino",
        "custode",
        "danzare",
        "data",
        "decennio",
        "decidere",
        "decollo",
        "dedicare",
        "dedurre",
        "definire",
        "delegare",
        "delfino",
        "delitto",
        "demone",
        "dentista",
        "denuncia",
        "deposito",
        "derivare",
        "deserto",
        "designer",
        "destino",
        "detonare",
        "dettagli",
        "diagnosi",
        "dialogo",
        "diamante",
        "diario",
        "diavolo",
        "dicembre",
        "difesa",
        "digerire",
        "digitare",
        "diluvio",
        "dinamica",
        "dipinto",
        "diploma",
        "diramare",
        "dire",
        "dirigere",
        "dirupo",
        "discesa",
        "disdetta",
        "disegno",
        "disporre",
        "dissenso",
        "distacco",
        "dito",
        "ditta",
        "diva",
        "divenire",
        "dividere",
        "divorare",
        "docente",
        "dolcetto",
        "dolore",
        "domatore",
        "domenica",
        "dominare",
        "donatore",
        "donna",
        "dorato",
        "dormire",
        "dorso",
        "dosaggio",
        "dottore",
        "dovere",
        "download",
        "dragone",
        "dramma",
        "dubbio",
        "dubitare",
        "duetto",
        "durata",
        "ebbrezza",
        "eccesso",
        "eccitare",
        "eclissi",
        "economia",
        "edera",
        "edificio",
        "editore",
        "edizione",
        "educare",
        "effetto",
        "egitto",
        "egiziano",
        "elastico",
        "elefante",
        "eleggere",
        "elemento",
        "elenco",
        "elezione",
        "elmetto",
        "elogio",
        "embrione",
        "emergere",
        "emettere",
        "eminenza",
        "emisfero",
        "emozione",
        "empatia",
        "energia",
        "enfasi",
        "enigma",
        "entrare",
        "enzima",
        "epidemia",
        "epilogo",
        "episodio",
        "epoca",
        "equivoco",
        "erba",
        "erede",
        "eroe",
        "erotico",
        "errore",
        "eruzione",
        "esaltare",
        "esame",
        "esaudire",
        "eseguire",
        "esempio",
        "esigere",
        "esistere",
        "esito",
        "esperto",
        "espresso",
        "essere",
        "estasi",
        "esterno",
        "estrarre",
        "eterno",
        "etica",
        "euforico",
        "europa",
        "evacuare",
        "evasione",
        "evento",
        "evidenza",
        "evitare",
        "evolvere",
        "fabbrica",
        "facciata",
        "fagiano",
        "fagotto",
        "falco",
        "fame",
        "famiglia",
        "fanale",
        "fango",
        "fantasia",
        "farfalla",
        "farmacia",
        "faro",
        "fase",
        "fastidio",
        "faticare",
        "fatto",
        "favola",
        "febbre",
        "femmina",
        "femore",
        "fenomeno",
        "fermata",
        "feromoni",
        "ferrari",
        "fessura",
        "festa",
        "fiaba",
        "fiamma",
        "fianco",
        "fiat",
        "fibbia",
        "fidare",
        "fieno",
        "figa",
        "figlio",
        "figura",
        "filetto",
        "filmato",
        "filosofo",
        "filtrare",
        "finanza",
        "finestra",
        "fingere",
        "finire",
        "finta",
        "finzione",
        "fiocco",
        "fioraio",
        "firewall",
        "firmare",
        "fisico",
        "fissare",
        "fittizio",
        "fiume",
        "flacone",
        "flagello",
        "flirtare",
        "flusso",
        "focaccia",
        "foglio",
        "fognario",
        "follia",
        "fonderia",
        "fontana",
        "forbici",
        "forcella",
        "foresta",
        "forgiare",
        "formare",
        "fornace",
        "foro",
        "fortuna",
        "forzare",
        "fosforo",
        "fotoni",
        "fracasso",
        "fragola",
        "frantumi",
        "fratello",
        "frazione",
        "freccia",
        "freddo",
        "frenare",
        "fresco",
        "friggere",
        "frittata",
        "frivolo",
        "frizione",
        "fronte",
        "frullato",
        "frumento",
        "frusta",
        "frutto",
        "fucile",
        "fuggire",
        "fulmine",
        "fumare",
        "funzione",
        "fuoco",
        "furbizia",
        "furgone",
        "furia",
        "furore",
        "fusibile",
        "fuso",
        "futuro",
        "gabbiano",
        "galassia",
        "gallina",
        "gamba",
        "gancio",
        "garanzia",
        "garofano",
        "gasolio",
        "gatto",
        "gazebo",
        "gazzetta",
        "gelato",
        "gemelli",
        "generare",
        "genitori",
        "gennaio",
        "geologia",
        "germania",
        "gestire",
        "gettare",
        "ghepardo",
        "ghiaccio",
        "giaccone",
        "giaguaro",
        "giallo",
        "giappone",
        "giardino",
        "gigante",
        "gioco",
        "gioiello",
        "giorno",
        "giovane",
        "giraffa",
        "giudizio",
        "giurare",
        "giusto",
        "globo",
        "gloria",
        "glucosio",
        "gnocca",
        "gocciola",
        "godere",
        "gomito",
        "gomma",
        "gonfiare",
        "gorilla",
        "governo",
        "gradire",
        "graffiti",
        "granchio",
        "grappolo",
        "grasso",
        "grattare",
        "gridare",
        "grissino",
        "grondaia",
        "grugnito",
        "gruppo",
        "guadagno",
        "guaio",
        "guancia",
        "guardare",
        "gufo",
        "guidare",
        "guscio",
        "gusto",
        "icona",
        "idea",
        "identico",
        "idolo",
        "idoneo",
        "idrante",
        "idrogeno",
        "igiene",
        "ignoto",
        "imbarco",
        "immagine",
        "immobile",
        "imparare",
        "impedire",
        "impianto",
        "importo",
        "impresa",
        "impulso",
        "incanto",
        "incendio",
        "incidere",
        "incontro",
        "incrocia",
        "incubo",
        "indagare",
        "indice",
        "indotto",
        "infanzia",
        "inferno",
        "infinito",
        "infranto",
        "ingerire",
        "inglese",
        "ingoiare",
        "ingresso",
        "iniziare",
        "innesco",
        "insalata",
        "inserire",
        "insicuro",
        "insonnia",
        "insulto",
        "interno",
        "introiti",
        "invasori",
        "inverno",
        "invito",
        "invocare",
        "ipnosi",
        "ipocrita",
        "ipotesi",
        "ironia",
        "irrigare",
        "iscritto",
        "isola",
        "ispirare",
        "isterico",
        "istinto",
        "istruire",
        "italiano",
        "jazz",
        "labbra",
        "labrador",
        "ladro",
        "lago",
        "lamento",
        "lampone",
        "lancetta",
        "lanterna",
        "lapide",
        "larva",
        "lasagne",
        "lasciare",
        "lastra",
        "latte",
        "laurea",
        "lavagna",
        "lavorare",
        "leccare",
        "legare",
        "leggere",
        "lenzuolo",
        "leone",
        "lepre",
        "letargo",
        "lettera",
        "levare",
        "levitare",
        "lezione",
        "liberare",
        "libidine",
        "libro",
        "licenza",
        "lievito",
        "limite",
        "lince",
        "lingua",
        "liquore",
        "lire",
        "listino",
        "litigare",
        "litro",
        "locale",
        "lottare",
        "lucciola",
        "lucidare",
        "luglio",
        "luna",
        "macchina",
        "madama",
        "madre",
        "maestro",
        "maggio",
        "magico",
        "maglione",
        "magnolia",
        "mago",
        "maialino",
        "maionese",
        "malattia",
        "male",
        "malloppo",
        "mancare",
        "mandorla",
        "mangiare",
        "manico",
        "manopola",
        "mansarda",
        "mantello",
        "manubrio",
        "manzo",
        "mappa",
        "mare",
        "margine",
        "marinaio",
        "marmotta",
        "marocco",
        "martello",
        "marzo",
        "maschera",
        "matrice",
        "maturare",
        "mazzetta",
        "meandri",
        "medaglia",
        "medico",
        "medusa",
        "megafono",
        "melone",
        "membrana",
        "menta",
        "mercato",
        "meritare",
        "merluzzo",
        "mese",
        "mestiere",
        "metafora",
        "meteo",
        "metodo",
        "mettere",
        "miele",
        "miglio",
        "miliardo",
        "mimetica",
        "minatore",
        "minuto",
        "miracolo",
        "mirtillo",
        "missile",
        "mistero",
        "misura",
        "mito",
        "mobile",
        "moda",
        "moderare",
        "moglie",
        "molecola",
        "molle",
        "momento",
        "moneta",
        "mongolia",
        "monologo",
        "montagna",
        "morale",
        "morbillo",
        "mordere",
        "mosaico",
        "mosca",
        "mostro",
        "motivare",
        "moto",
        "mulino",
        "mulo",
        "muovere",
        "muraglia",
        "muscolo",
        "museo",
        "musica",
        "mutande",
        "nascere",
        "nastro",
        "natale",
        "natura",
        "nave",
        "navigare",
        "negare",
        "negozio",
        "nemico",
        "nero",
        "nervo",
        "nessuno",
        "nettare",
        "neutroni",
        "neve",
        "nevicare",
        "nicotina",
        "nido",
        "nipote",
        "nocciola",
        "noleggio",
        "nome",
        "nonno",
        "norvegia",
        "notare",
        "notizia",
        "nove",
        "nucleo",
        "nuda",
        "nuotare",
        "nutrire",
        "obbligo",
        "occhio",
        "occupare",
        "oceano",
        "odissea",
        "odore",
        "offerta",
        "officina",
        "offrire",
        "oggetto",
        "oggi",
        "olfatto",
        "olio",
        "oliva",
        "ombelico",
        "ombrello",
        "omuncolo",
        "ondata",
        "onore",
        "opera",
        "opinione",
        "opuscolo",
        "opzione",
        "orario",
        "orbita",
        "orchidea",
        "ordine",
        "orecchio",
        "orgasmo",
        "orgoglio",
        "origine",
        "orologio",
        "oroscopo",
        "orso",
        "oscurare",
        "ospedale",
        "ospite",
        "ossigeno",
        "ostacolo",
        "ostriche",
        "ottenere",
        "ottimo",
        "ottobre",
        "ovest",
        "pacco",
        "pace",
        "pacifico",
        "padella",
        "pagare",
        "pagina",
        "pagnotta",
        "palazzo",
        "palestra",
        "palpebre",
        "pancetta",
        "panfilo",
        "panino",
        "pannello",
        "panorama",
        "papa",
        "paperino",
        "paradiso",
        "parcella",
        "parente",
        "parlare",
        "parodia",
        "parrucca",
        "partire",
        "passare",
        "pasta",
        "patata",
        "patente",
        "patogeno",
        "patriota",
        "pausa",
        "pazienza",
        "peccare",
        "pecora",
        "pedalare",
        "pelare",
        "pena",
        "pendenza",
        "penisola",
        "pennello",
        "pensare",
        "pentirsi",
        "percorso",
        "perdono",
        "perfetto",
        "perizoma",
        "perla",
        "permesso",
        "persona",
        "pesare",
        "pesce",
        "peso",
        "petardo",
        "petrolio",
        "pezzo",
        "piacere",
        "pianeta",
        "piastra",
        "piatto",
        "piazza",
        "piccolo",
        "piede",
        "piegare",
        "pietra",
        "pigiama",
        "pigliare",
        "pigrizia",
        "pilastro",
        "pilota",
        "pinguino",
        "pioggia",
        "piombo",
        "pionieri",
        "piovra",
        "pipa",
        "pirata",
        "pirolisi",
        "piscina",
        "pisolino",
        "pista",
        "pitone",
        "piumino",
        "pizza",
        "plastica",
        "platino",
        "poesia",
        "poiana",
        "polaroid",
        "polenta",
        "polimero",
        "pollo",
        "polmone",
        "polpetta",
        "poltrona",
        "pomodoro",
        "pompa",
        "popolo",
        "porco",
        "porta",
        "porzione",
        "possesso",
        "postino",
        "potassio",
        "potere",
        "poverino",
        "pranzo",
        "prato",
        "prefisso",
        "prelievo",
        "premio",
        "prendere",
        "prestare",
        "pretesa",
        "prezzo",
        "primario",
        "privacy",
        "problema",
        "processo",
        "prodotto",
        "profeta",
        "progetto",
        "promessa",
        "pronto",
        "proposta",
        "proroga",
        "prossimo",
        "proteina",
        "prova",
        "prudenza",
        "pubblico",
        "pudore",
        "pugilato",
        "pulire",
        "pulsante",
        "puntare",
        "pupazzo",
        "puzzle",
        "quaderno",
        "qualcuno",
        "quarzo",
        "quercia",
        "quintale",
        "rabbia",
        "racconto",
        "radice",
        "raffica",
        "ragazza",
        "ragione",
        "rammento",
        "ramo",
        "rana",
        "randagio",
        "rapace",
        "rapinare",
        "rapporto",
        "rasatura",
        "ravioli",
        "reagire",
        "realista",
        "reattore",
        "reazione",
        "recitare",
        "recluso",
        "record",
        "recupero",
        "redigere",
        "regalare",
        "regina",
        "regola",
        "relatore",
        "reliquia",
        "remare",
        "rendere",
        "reparto",
        "resina",
        "resto",
        "rete",
        "retorica",
        "rettile",
        "revocare",
        "riaprire",
        "ribadire",
        "ribelle",
        "ricambio",
        "ricetta",
        "richiamo",
        "ricordo",
        "ridurre",
        "riempire",
        "riferire",
        "riflesso",
        "righello",
        "rilancio",
        "rilevare",
        "rilievo",
        "rimanere",
        "rimborso",
        "rinforzo",
        "rinuncia",
        "riparo",
        "ripetere",
        "riposare",
        "ripulire",
        "risalita",
        "riscatto",
        "riserva",
        "riso",
        "rispetto",
        "ritaglio",
        "ritmo",
        "ritorno",
        "ritratto",
        "rituale",
        "riunione",
        "riuscire",
        "riva",
        "robotica",
        "rondine",
        "rosa",
        "rospo",
        "rosso",
        "rotonda",
        "rotta",
        "roulotte",
        "rubare",
        "rubrica",
        "ruffiano",
        "rumore",
        "ruota",
        "ruscello",
        "sabbia",
        "sacco",
        "saggio",
        "sale",
        "salire",
        "salmone",
        "salto",
        "salutare",
        "salvia",
        "sangue",
        "sanzioni",
        "sapere",
        "sapienza",
        "sarcasmo",
        "sardine",
        "sartoria",
        "sbalzo",
        "sbarcare",
        "sberla",
        "sborsare",
        "scadenza",
        "scafo",
        "scala",
        "scambio",
        "scappare",
        "scarpa",
        "scatola",
        "scelta",
        "scena",
        "sceriffo",
        "scheggia",
        "schiuma",
        "sciarpa",
        "scienza",
        "scimmia",
        "sciopero",
        "scivolo",
        "sclerare",
        "scolpire",
        "sconto",
        "scopa",
        "scordare",
        "scossa",
        "scrivere",
        "scrupolo",
        "scuderia",
        "scultore",
        "scuola",
        "scusare",
        "sdraiare",
        "secolo",
        "sedativo",
        "sedere",
        "sedia",
        "segare",
        "segreto",
        "seguire",
        "semaforo",
        "seme",
        "senape",
        "seno",
        "sentiero",
        "separare",
        "sepolcro",
        "sequenza",
        "serata",
        "serpente",
        "servizio",
        "sesso",
        "seta",
        "settore",
        "sfamare",
        "sfera",
        "sfidare",
        "sfiorare",
        "sfogare",
        "sgabello",
        "sicuro",
        "siepe",
        "sigaro",
        "silenzio",
        "silicone",
        "simbiosi",
        "simpatia",
        "simulare",
        "sinapsi",
        "sindrome",
        "sinergia",
        "sinonimo",
        "sintonia",
        "sirena",
        "siringa",
        "sistema",
        "sito",
        "smalto",
        "smentire",
        "smontare",
        "soccorso",
        "socio",
        "soffitto",
        "software",
        "soggetto",
        "sogliola",
        "sognare",
        "soldi",
        "sole",
        "sollievo",
        "solo",
        "sommario",
        "sondare",
        "sonno",
        "sorpresa",
        "sorriso",
        "sospiro",
        "sostegno",
        "sovrano",
        "spaccare",
        "spada",
        "spagnolo",
        "spalla",
        "sparire",
        "spavento",
        "spazio",
        "specchio",
        "spedire",
        "spegnere",
        "spendere",
        "speranza",
        "spessore",
        "spezzare",
        "spiaggia",
        "spiccare",
        "spiegare",
        "spiffero",
        "spingere",
        "sponda",
        "sporcare",
        "spostare",
        "spremuta",
        "spugna",
        "spumante",
        "spuntare",
        "squadra",
        "squillo",
        "staccare",
        "stadio",
        "stagione",
        "stallone",
        "stampa",
        "stancare",
        "starnuto",
        "statura",
        "stella",
        "stendere",
        "sterzo",
        "stilista",
        "stimolo",
        "stinco",
        "stiva",
        "stoffa",
        "storia",
        "strada",
        "stregone",
        "striscia",
        "studiare",
        "stufa",
        "stupendo",
        "subire",
        "successo",
        "sudare",
        "suono",
        "superare",
        "supporto",
        "surfista",
        "sussurro",
        "svelto",
        "svenire",
        "sviluppo",
        "svolta",
        "svuotare",
        "tabacco",
        "tabella",
        "tabu",
        "tacchino",
        "tacere",
        "taglio",
        "talento",
        "tangente",
        "tappeto",
        "tartufo",
        "tassello",
        "tastiera",
        "tavolo",
        "tazza",
        "teatro",
        "tedesco",
        "telaio",
        "telefono",
        "tema",
        "temere",
        "tempo",
        "tendenza",
        "tenebre",
        "tensione",
        "tentare",
        "teologia",
        "teorema",
        "termica",
        "terrazzo",
        "teschio",
        "tesi",
        "tesoro",
        "tessera",
        "testa",
        "thriller",
        "tifoso",
        "tigre",
        "timbrare",
        "timido",
        "tinta",
        "tirare",
        "tisana",
        "titano",
        "titolo",
        "toccare",
        "togliere",
        "topolino",
        "torcia",
        "torrente",
        "tovaglia",
        "traffico",
        "tragitto",
        "training",
        "tramonto",
        "transito",
        "trapezio",
        "trasloco",
        "trattore",
        "trazione",
        "treccia",
        "tregua",
        "treno",
        "triciclo",
        "tridente",
        "trilogia",
        "tromba",
        "troncare",
        "trota",
        "trovare",
        "trucco",
        "tubo",
        "tulipano",
        "tumulto",
        "tunisia",
        "tuono",
        "turista",
        "tuta",
        "tutelare",
        "tutore",
        "ubriaco",
        "uccello",
        "udienza",
        "udito",
        "uffa",
        "umanoide",
        "umore",
        "unghia",
        "unguento",
        "unicorno",
        "unione",
        "universo",
        "uomo",
        "uragano",
        "uranio",
        "urlare",
        "uscire",
        "utente",
        "utilizzo",
        "vacanza",
        "vacca",
        "vaglio",
        "vagonata",
        "valle",
        "valore",
        "valutare",
        "valvola",
        "vampiro",
        "vaniglia",
        "vanto",
        "vapore",
        "variante",
        "vasca",
        "vaselina",
        "vassoio",
        "vedere",
        "vegetale",
        "veglia",
        "veicolo",
        "vela",
        "veleno",
        "velivolo",
        "velluto",
        "vendere",
        "venerare",
        "venire",
        "vento",
        "veranda",
        "verbo",
        "verdura",
        "vergine",
        "verifica",
        "vernice",
        "vero",
        "verruca",
        "versare",
        "vertebra",
        "vescica",
        "vespaio",
        "vestito",
        "vesuvio",
        "veterano",
        "vetro",
        "vetta",
        "viadotto",
        "viaggio",
        "vibrare",
        "vicenda",
        "vichingo",
        "vietare",
        "vigilare",
        "vigneto",
        "villa",
        "vincere",
        "violino",
        "vipera",
        "virgola",
        "virtuoso",
        "visita",
        "vita",
        "vitello",
        "vittima",
        "vivavoce",
        "vivere",
        "viziato",
        "voglia",
        "volare",
        "volpe",
        "volto",
        "volume",
        "vongole",
        "voragine",
        "vortice",
        "votare",
        "vulcano",
        "vuotare",
        "zabaione",
        "zaffiro",
        "zainetto",
        "zampa",
        "zanzara",
        "zattera",
        "zavorra",
        "zenzero",
        "zero",
        "zingaro",
        "zittire",
        "zoccolo",
        "zolfo",
        "zombie",
        "zucchero"
      }), 4)
    {
      populate_maps();
    }
  };
}

#endif
